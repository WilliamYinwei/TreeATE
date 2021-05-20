///
/// @brief         TreeATE Label class
/// @author        David Yin  2021-05 willage.yin@163.com
///
/// @license       GNU LGPL v3
///
/// Distributed under the GNU LGPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/lgpl-3.0.html)
///
#ifndef TALABEL_H
#define TALABEL_H

#include <QLabel>

class TALabel : public QLabel
{
    Q_OBJECT
public:
    TALabel(QWidget* parent=0);

signals:
    void clicked();

protected:
    virtual void mouseReleaseEvent(QMouseEvent* event);
};

#endif // TALABEL_H
