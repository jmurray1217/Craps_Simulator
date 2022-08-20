#ifndef TABLE_H
#define TABLE_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>

#define MAX_Bets 15

namespace Ui {
class Table;
}

class Table : public QWidget
{
    Q_OBJECT

public:
    explicit Table(QWidget *parent = nullptr);
    int  Place4 = 0;
    int* Place4Ptr = &Place4;
    int  Place5 = 0;
    int* Place5Ptr = &Place5;
    int  Place6 = 0;
    int* Place6Ptr = &Place6;
    int  Place8 = 0;
    int* Place8Ptr = &Place8;
    int  Place9 = 0;
    int* Place9Ptr = &Place9;
    int  Place10 = 0;
    int* Place10Ptr = &Place10;
    int  Lay4 = 0;
    int* Lay4Ptr = &Lay4;
    int  Lay5 = 0;
    int* Lay5Ptr = &Lay5;
    int  Lay6 = 0;
    int* Lay6Ptr = &Lay6;
    int  Lay8 = 0;
    int* Lay8Ptr = &Lay8;
    int  Lay9 = 0;
    int* Lay9Ptr = &Lay9;
    int  Lay10 = 0;
    int* Lay10Ptr = &Lay10;
    int Field = 0;
    int* FieldPtr = &Field;
    int ComeBet = 0;
    int* ComeBetPtr = &ComeBet;
    int PassLine = 0;
    int* PassLinePtr = &PassLine;

    int*  betsArr[MAX_Bets] = {Place4Ptr, Place5Ptr, Place6Ptr, Place8Ptr, Place9Ptr, Place10Ptr, Lay4Ptr, Lay5Ptr, Lay6Ptr, Lay8Ptr, Lay9Ptr, Lay10Ptr, FieldPtr, ComeBetPtr, PassLinePtr};

    ~Table();

private slots:
    void placeBet(int*, Ui::Table*);
    void updateBets(Ui::Table*);

private:
    Ui::Table *ui;
};

#endif // TABLE_H
