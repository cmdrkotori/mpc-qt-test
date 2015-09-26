#ifndef PLAYLISTWINDOW_H
#define PLAYLISTWINDOW_H

#include <QDockWidget>

namespace Ui {
class PlaylistWindow;
}

class Item;

class PlaylistWindow : public QDockWidget
{
    Q_OBJECT

public:
    explicit PlaylistWindow(QWidget *parent = 0);
    ~PlaylistWindow();

    QPair<QUuid, QUuid> addToCurrentPlaylist(QList<QUrl> what);
    bool isCurrentPlaylistEmpty();

private slots:
    void on_newTab_clicked();

    void on_closeTab_clicked();

    void on_tabWidget_tabCloseRequested(int index);

    void on_duplicateTab_clicked();

private:
    Ui::PlaylistWindow *ui;
};

#endif // PLAYLISTWINDOW_H