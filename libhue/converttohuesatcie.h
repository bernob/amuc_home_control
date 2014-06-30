#ifndef COLORCONVERTER_H
#define COLORCONVERTER_H

#include <QColor>
#include <QGenericMatrix>

class ConvertToHueSatCIE
{
public:
    ConvertToHueSatCIE(const QColor &color);

    quint16 hue;
    quint8 sat;
    qreal x;
    qreal y;
};

#endif // COLORCONVERTER_H
