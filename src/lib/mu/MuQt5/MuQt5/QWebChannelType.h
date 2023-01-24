//
// Copyright (c) 2009, Jim Hourihan
// All rights reserved.
//
// SPDX-License-Identifier: Apache-2.0 
// 
#ifndef __MuQt5__QWebChannelType__h__
#define __MuQt5__QWebChannelType__h__
#include <iostream>
#include <Mu/Class.h>
#include <Mu/MuProcess.h>
#include <QtCore/QtCore>
#include <QtGui/QtGui>
#include <QtWidgets/QtWidgets>
#include <QtNetwork/QtNetwork>
#include <QtWebEngine/QtWebEngine>
#include <QtWebEngineWidgets/QtWebEngineWidgets>
#include <QtQml/QtQml>
#include <QtQuick/QtQuick>
#include <QtQuickWidgets/QtQuickWidgets>
#include <QtSvg/QtSvg>
#include <MuQt5/Bridge.h>

namespace Mu {
class MuQt_QWebChannel;

//
//  NOTE: file generated by qt2mu.py
//

class QWebChannelType : public Class
{
  public:

    typedef MuQt_QWebChannel MuQtType;
    typedef QWebChannel QtType;

    //
    //  Constructors
    //

    QWebChannelType(Context* context, 
           const char* name,
           Class* superClass = 0,
           Class* superClass2 = 0);

    virtual ~QWebChannelType();

    static bool isInheritable() { return true; }
    static inline ClassInstance* cachedInstance(const MuQtType*);

    //
    //  Class API
    //

    virtual void load();

    MemberFunction* _func[4];
};

// Inheritable object

class MuQt_QWebChannel : public QWebChannel
{
  public:
    virtual ~MuQt_QWebChannel();
    MuQt_QWebChannel(Pointer muobj, const CallEnvironment*, QObject * parent) ;
    virtual bool event(QEvent * e) ;
    virtual bool eventFilter(QObject * watched, QEvent * event) ;
  protected:
    virtual void customEvent(QEvent * event) ;
    virtual void timerEvent(QTimerEvent * event) ;
  public:
    void customEvent_pub(QEvent * event)  { customEvent(event); }
    void customEvent_pub_parent(QEvent * event)  { QWebChannel::customEvent(event); }
    void timerEvent_pub(QTimerEvent * event)  { timerEvent(event); }
    void timerEvent_pub_parent(QTimerEvent * event)  { QWebChannel::timerEvent(event); }
  public:
    const QWebChannelType* _baseType;
    ClassInstance* _obj;
    const CallEnvironment* _env;
};

inline ClassInstance* QWebChannelType::cachedInstance(const QWebChannelType::MuQtType* obj) { return obj->_obj; }

} // Mu

#endif // __MuQt__QWebChannelType__h__