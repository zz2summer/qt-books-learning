#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

class QSqlTableModel;

namespace Ui {
    class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_sellTypeComboBox_currentIndexChanged(QString );

    void on_sellBrandComboBox_currentIndexChanged(QString );

    void on_sellNumSpinBox_valueChanged(int );

    void on_sellCancelBtn_clicked();

    void on_sellOkBtn_clicked();

    void on_changePwdBtn_clicked();

    void on_passwordBtn_clicked();

    void on_goodsTypeComboBox_currentIndexChanged(QString );

    void on_goodsCancelBtn_clicked();

    void on_goodsBrandComboBox_currentIndexChanged(QString );

    void on_goodsNumSpinBox_valueChanged(int );

    void on_goodsOkBtn_clicked();

    void on_newTypeComboBox_currentIndexChanged(QString );

    void on_newCancelBtn_clicked();

    void on_newNumSpinBox_valueChanged(int );

    void on_newPriceSpinBox_valueChanged(int );


    void on_newBrandLineEdit_textChanged(QString );

    void on_newOkBtn_clicked();

    void on_sellBtn_clicked();

    void on_buyBtn_clicked();

    void on_addBtn_clicked();

    void on_queryBtn_clicked();

    void on_queryPushButton_clicked();

    void on_queryTypeComboBox_currentIndexChanged(const QString );

private:
    QSqlTableModel *model;
    Ui::Widget *ui;

};

#endif // WIDGET_H
