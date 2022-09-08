#include "qrcodeimageprovider.h"

#include <QDebug>

#include "qrpainter.h"

QrCodeImageProvider::QrCodeImageProvider() :
    QQuickImageProvider(QQuickImageProvider::Pixmap)
{

}

QPixmap QrCodeImageProvider::requestPixmap(const QString &id, QSize *size, const QSize &requestedSize)
{
    qDebug() << id;
    qDebug() << requestedSize;

    const int width{512};
    const int height{512};

    if (size) {
        *size = QSize(width, height);
    }



    QPixmap pixmap(width, height);
    pixmap.fill(Qt::white);
    QPainter painter(&pixmap);
    paintQR(painter, QSize(width, height), id);

    return pixmap;
}
