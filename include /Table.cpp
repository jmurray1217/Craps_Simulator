#include "Table.hpp"
#include "ui_table.hpp"
#include <iostream>
#include <string>
#include <cstdio>
#include <stdio.h>
#include <QString>

Table::Table(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Table)

{
    ui->setupUi(this);
    connect(ui->Place_4, &QPushButton::clicked, [this]()->void{
        this->placeBet(Place4Ptr, ui);
    } );    
    connect(ui->Place_5, &QPushButton::clicked, [this]()->void{
        this->placeBet(Place5Ptr, ui);
    } );    
    connect(ui->Place_6, &QPushButton::clicked, [this]()->void{
        this->placeBet(Place6Ptr, ui);
    } );    
    connect(ui->Place_8, &QPushButton::clicked, [this]()->void{
        this->placeBet(Place8Ptr, ui);
    } );    
    connect(ui->Place_9, &QPushButton::clicked, [this]()->void{
        this->placeBet(Place9Ptr, ui);
    } );    
    connect(ui->Place_10, &QPushButton::clicked, [this]()->void{
        this->placeBet(Place10Ptr, ui);
    } );

}
using namespace std;
void Table::placeBet(int* WhichBet, Ui::Table* table){
    QPushButton *btn = qobject_cast<QPushButton *>(sender());
    // printf("I received a click from: %s", qPrintable(btn->objectName()));
    *WhichBet += 5;
    Table::updateBets(table);

}

void Table::updateBets(Ui::Table* table){
    for (int i = 0; i < 15; i++)
    {
        int val = *betsArr[i];
        switch (i)
        {
        case 0:
            table->Place_4->setText(QString::number(val));
            break;
        case 1:
            table->Place_5->setText(QString::number(val));
            break;
        case 2:
            table->Place_6->setText(QString::number(val));
            break;
        case 3:
            table->Place_8->setText(QString::number(val));
            break;
        case 4:
            table->Place_9->setText(QString::number(val));
            break;
        case 5:
            table->Place_10->setText(QString::number(val));
            break;
        case 6:
            table->Lay_4->setText(QString::number(val));
            printf("Lay 4");
            break;
        case 7:
            table->Lay_5->setText(QString::number(val));
            printf("Lay 5");
            break;
        case 8:
            table->Lay_6->setText(QString::number(val));
            printf("Lay 6");
            break;
        case 9:
            table->Lay_8->setText(QString::number(val));
            printf("Lay 8");
            break;
        case 10:
            table->Lay_9->setText(QString::number(val));
            printf("Lay 9");
            break;
        case 11:
            table->Lay_10->setText(QString::number(val));
            printf("Lay 10");
            break;
        case 12:
            printf("FieldPtr");
            break;
        case 13:
            printf("ComeBetPtr");
            break;
        case 14:
            printf("PassLinePtr");
            break;    
        default:
            break;
        }
        int val = *betsArr[i];
        printf("%d\n", val);
        // if (val != 0) {
        //     printf("%d\n", i);
        // }
    }
    // table->Place_4->setText(QString::number(*Place4Ptr));

}
    // printf("I received a click from: %s", qPrintable(btn->objectName()));
    
    // if (btn->objectName() == QString("Place_4")) {
    //     Place4BetTotal += 5;
    //     toString = QString::fromStdString(std::string("%d", Place4BetTotal));
    //     btn->setText(toString);
    //     // ui->Place_4_Bet->setNum(Place4BetTotal);
    // }
    // else if (btn->objectName() == QString("Place_5")) {
    //     Place5BetTotal += 5;
    //     toString = QString::fromStdString(std::string("%d", Place5BetTotal));
    //     // ui->Place_5_Bet->setNum(Place5BetTotal);
    // }
    // else if (btn->objectName() == QString("Place_6")) {
    //     Place6BetTotal += 5;
    //     toString = QString::fromStdString(std::string("%d", Place6BetTotal));
    //     // ui->Place_6_Bet->setNum(Place6BetTotal);
    // }
    // else if (btn->objectName() == QString("Place_8")) {
    //     Place8BetTotal += 5;
    //     toString = QString::fromStdString(std::string("%d", Place8BetTotal));
    //     // ui->Place_8_Bet->setNum(Place8BetTotal);
    // }
    // else if (btn->objectName() == QString("Place_9")) {
    //     Place9BetTotal += 5;
    //     toString = QString::fromStdString(std::string("%d", Place9BetTotal));
    //     // ui->Place_9_Bet->setNum(Place9BetTotal);
    // }
    // else if (btn->objectName() == QString("Place_10")) {
    //     Place10BetTotal += 5;
    //     toString = QString::fromStdString(std::string("%d", Place10BetTotal));
    //     // ui->Place_10_Bet->setNum(Place10BetTotal);
    // }
    // if (btn->objectName() == QString("Lay_4")) {
    //     Lay4BetTotal += 5;
    //     toString = QString::fromStdString(std::string("%d", Lay4BetTotal));
    //     // ui->Lay_4_Bet->setNum(Lay4BetTotal);
    // }
    // else if (btn->objectName() == QString("Lay_5")) {
    //     Lay5BetTotal += 5;
    //     toString = QString::fromStdString(std::string("%d", Lay5BetTotal));
    //     // ui->Lay_5_Bet->setNum(Lay5BetTotal);
    // }
    // else if (btn->objectName() == QString("Lay_6")) {
    //     Lay6BetTotal += 5;
    //     toString = QString::fromStdString(std::string("%d", Lay6BetTotal));
    //     // ui->Lay_6_Bet->setNum(Lay6BetTotal);
    // }
    // else if (btn->objectName() == QString("Lay_8")) {
    //     Lay8BetTotal += 5;
    //     toString = QString::fromStdString(std::string("%d", Lay8BetTotal));
    //     // ui->Lay_8_Bet->setNum(Lay8BetTotal);
    // }
    // else if (btn->objectName() == QString("Lay_9")) {
    //     Lay9BetTotal += 5;
    //     toString = QString::fromStdString(std::string("%d", Lay9BetTotal));
    //     // ui->Lay_9_Bet->setNum(Lay9BetTotal);
    // }
    // else if (btn->objectName() == QString("Lay_10")) {
    //     Lay10BetTotal += 5;
    //     toString = QString::fromStdString(std::string("%d", Lay10BetTotal));
    //     // ui->Lay_10_Bet->setNum(Lay10BetTotal);
    // }

Table::~Table()
{
    delete ui;
}
