#ifndef CTOOLBAR_H
#define CTOOLBAR_H

#include <QToolBar>

#include "QMWidgetsGlobal.h"

class QMWIDGETS_EXPORT CToolBar : public QToolBar {
public:
    explicit CToolBar(const QString &title, QWidget *parent = nullptr);
    explicit CToolBar(QWidget *parent = nullptr);
    ~CToolBar();

protected:
    void actionEvent(QActionEvent *event) override;
};

#endif // CTOOLBAR_H
