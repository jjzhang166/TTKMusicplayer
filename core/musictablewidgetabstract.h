#ifndef MUSICTABLEWIDGETABSTRACT_H
#define MUSICTABLEWIDGETABSTRACT_H

#include <QTableWidget>
#include "musiclibexportglobal.h"
#include "musicobject.h"

class MUSIC_EXPORT MusicTableWidgetAbstract : public QTableWidget
{
    Q_OBJECT
public:
    explicit MusicTableWidgetAbstract(QWidget *parent = 0);
    ~MusicTableWidgetAbstract();

    void setTransparent(int angle);
    void setRowColor(int row, const QColor& color);

signals:

public slots:
    virtual void listCellEntered(int row, int column);
    virtual void listCellClicked(int row, int column);

protected:
    QColor m_defaultBkColor;
    int m_previousColorRow;

};

#endif // MUSICTABLEWIDGETABSTRACT_H
