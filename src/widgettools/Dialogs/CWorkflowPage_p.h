#ifndef CWORKFLOWPAGE_P_H
#define CWORKFLOWPAGE_P_H

//
//  W A R N I N G !!!
//  -----------------
//
// This file is not part of the QtMediate API. It is used purely as an
// implementation detail. This header file may change from version to
// version without notice, or may even be removed.
//

#include <QBoxLayout>
#include <QLabel>
#include <QSplitter>
#include <QStackedWidget>

#include <QMap>

#include <QMWidgetTools/CWorkflowPage.h>

class CWorkflowPagePrivate : public QObject {
    Q_OBJECT
    Q_DECLARE_PUBLIC(CWorkflowPage)
public:
    CWorkflowPagePrivate();
    ~CWorkflowPagePrivate();

    void init();

    void reloadStrings();

    QString buttonText(CWorkflowPage::Button button) const;
    void setButtonText(CWorkflowPage::Button button, const QString &text);

    CWorkflowPage *q_ptr;

    QLabel *titleLabel;
    QLabel *descriptionLabel;
    QStackedWidget *stackedWidget;

    QVBoxLayout *rightLayout;
    QWidget *rightWidget;

    QWidget *emptyWidget;

    QSplitter *splitter;
    QVBoxLayout *mainLayout;

    CWorkflowPage::Buttons buttons;

    struct ButtonData {
        QString text;
        QString overrideText;
        bool enabled;
        ButtonData() : enabled(true){};
    };

    QMap<CWorkflowPage::Button, ButtonData> buttonsData;
};

#endif // CWORKFLOWPAGE_P_H
