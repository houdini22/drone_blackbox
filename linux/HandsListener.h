/****************************************************************************
**
** Copyright (C) Paul Lemire
** Contact: paul.lemire@epitech.eu
**
**
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
**
****************************************************************************/

#ifndef HandsListener_H
#define HandsListener_H

#include <QQuickItem>
#include "QtLeapMotion/QtLeapGlobal/Listeners/QtLeapHandsListenerInterface.h"
#include "QtLeapMotion/QtLeapGlobal/QtLeapGlobal.h"


namespace QtLeapMotion
{

class QtLeapHand;

class QTLEAPMOTION_EXPORT HandsListener :
        public QQuickItem,
        public QtLeapHandsListenerInterface
{
    Q_OBJECT
    Q_INTERFACES(QtLeapMotion::QtLeapHandsListenerInterface)
    Q_PROPERTY(QList<QtLeapMotion::QtLeapHand *> hands READ getHands NOTIFY handsChanged)
public:
    HandsListener(QQuickItem *parent = 0);
    void updateHands(QList<QtLeapHand *> handsList);
    QList<QtLeapHand *> getHands() const;

protected:
    QSGNode *updatePaintNode(QSGNode *oldNode, UpdatePaintNodeData *data);
    void itemChange(ItemChange, const ItemChangeData &);

signals:
    void handUpdated(QtLeapMotion::QtLeapHand *hand);
    void handAdded(QtLeapMotion::QtLeapHand *hand);
    void handRemoved(QtLeapMotion::QtLeapHand *hand);
    void handsChanged();

private:
    QHash<int, QtLeapMotion::QtLeapHand *> m_hands;
};

}

#endif // HandsListener_H
