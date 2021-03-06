/**
 * Copyright (C) 2015 Deepin Technology Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 **/

#ifndef GENERATEDVIEW_H
#define GENERATEDVIEW_H

#include "abstractview.h"
#include "widgets/notifylabel.h"
#include "widgets/tiplabel.h"

class QLabel;
class QTimer;

class GeneratedView : public AbstractView
{
    Q_OBJECT
public:
    GeneratedView(const QString &token, QWidget *p = nullptr);

signals:
    void cancel();

private:
    QWidget *createMainWidget() Q_DECL_OVERRIDE;
    NotifyLabel *m_tokenLabel;
    TipLabel *m_tipLabel;
    QLabel *m_copyTip;
    QTimer *m_copyTipVisableTimer;
    QString m_token;
};

#endif // GENERATEDVIEW_H
