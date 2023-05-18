#ifndef PHOTO_H
#define PHOTO_H

#include <QWidget>

namespace Ui {
class Photo;
}

class Photo : public QWidget
{
    Q_OBJECT

public:
    explicit Photo(QWidget *parent = nullptr);
    ~Photo();

private:
    Ui::Photo *ui;
};

#endif // PHOTO_H
