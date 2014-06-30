#include "converttohuesatcie.h"

ConvertToHueSatCIE::ConvertToHueSatCIE(const QColor &color)
{
    // Transform from RGB to Hue/Sat
    hue = color.hue() * 65535 / 360;
    sat = color.saturation();

    // Transform from RGB to XYZ
    QGenericMatrix<3, 3, qreal> rgb2xyzMatrix;
    rgb2xyzMatrix(0, 0) = 0.412453;    rgb2xyzMatrix(0, 1) = 0.357580;    rgb2xyzMatrix(0, 2) = 0.180423;
    rgb2xyzMatrix(1, 0) = 0.212671;    rgb2xyzMatrix(1, 1) = 0.715160;    rgb2xyzMatrix(1, 2) = 0.072169;
    rgb2xyzMatrix(2, 0) = 0.019334;    rgb2xyzMatrix(2, 1) = 0.119193;    rgb2xyzMatrix(2, 2) = 0.950227;

    QGenericMatrix<1, 3, qreal> rgbMatrix;
    rgbMatrix(0, 0) = 1.0 * color.red() / 255;
    rgbMatrix(1, 0) = 1.0 * color.green() / 255;
    rgbMatrix(2, 0) = 1.0 * color.blue() / 255;

    QGenericMatrix<1, 3, qreal> xyzMatrix = rgb2xyzMatrix * rgbMatrix;

    // transform from XYZ to CIELUV u' and v'
    qreal u = 4*xyzMatrix(0, 0) / (xyzMatrix(0, 0) + 15*xyzMatrix(1, 0) + 3*xyzMatrix(2, 0));
    qreal v = 9*xyzMatrix(1, 0) / (xyzMatrix(0, 0) + 15*xyzMatrix(1, 0) + 3*xyzMatrix(2, 0));

    // Transform from CIELUV to (x,y)
    x = 27*u / (18*u - 48*v + 36);
    y = 12*v / (18*u - 48*v + 36);
}
