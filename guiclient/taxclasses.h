/*
 * This file is part of the xTuple ERP: PostBooks Edition, a free and
 * open source Enterprise Resource Planning software suite,
 * Copyright (c) 1999-2014 by OpenMFG LLC, d/b/a xTuple.
 * It is licensed to you under the Common Public Attribution License
 * version 1.0, the full text of which (including xTuple-specific Exhibits)
 * is available at www.xtuple.com/CPAL.  By using this software, you agree
 * to be bound by its terms.
 */

#ifndef TAXCLASSES_H
#define TAXCLASSES_H

#include "guiclient.h"
#include "xwidget.h"
#include "ui_taxClasses.h" 

class taxClasses : public XWidget, public Ui::taxClasses
{
    Q_OBJECT

public:
    taxClasses(QWidget* parent = 0, const char* name = 0, Qt::WindowFlags fl = Qt::Window);
    ~taxClasses();

public slots:
    virtual void sDelete();
    virtual void sNew();
    virtual void sEdit();
    virtual void sView();
    virtual void sFillList(int pId);

protected slots:
    virtual void languageChange();
};

#endif // TAXCLASSES_H
