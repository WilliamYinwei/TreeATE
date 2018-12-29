///
/// @project       TreeATE
/// @brief         For default size of the DockWidget
/// @author        David Yin  2018-12 willage.yin@163.com
///
/// @license       GNU LGPL
///
/// Distributed under the GNU LGPL License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/lgpl.html)
///

#ifndef TASIZEDOCKWIDGET_H
#define TASIZEDOCKWIDGET_H

#include <QWidget>

class TASizeDockWidget : public QWidget
{
    Q_OBJECT
public:
    explicit TASizeDockWidget(QWidget *parent = 0);

    QSize sizeHint() const;
};

#endif // TASIZEDOCKWIDGET_H
