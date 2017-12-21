#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class QPainter;
class QImage;

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
protected:
    void paintEvent(QPaintEvent *e) override;
    void mousePressEvent(QMouseEvent *e) override;
    void mouseMoveEvent(QMouseEvent *e) override;
    void mouseReleaseEvent(QMouseEvent *e) override;
private slots:
    void on_actionThickness_triggered();
    void on_actionColor_triggered();
    void on_actionExit_without_saving_triggered();

private:
    Ui::MainWindow *ui;
    QPainter *mPainter;     // paint
    QImage *mImage;         // image
    QPoint mBegin;          // start
    QPoint mEnd;            // final
    QColor mColor;          // color
    bool mEnabled;          // activation
    int mSize;              // size
};

#endif // MAINWINDOW_H
