/**********************************************************************
 *  tcetwelcome.h
 **********************************************************************
 * Copyleft (C) 2020 tcet Authors
 *          tcet Linux <http://tcetlinux.in>
 *
 * This file is part of tcet-welcome.
 *
 * tcet-welcome is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * tcet-welcome is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with tcet-welcome.  If not, see <http://www.gnu.org/licenses/>.
 **********************************************************************/

#ifndef tcetWELCOME_H
#define tcetWELCOME_H

#include <QMessageBox>

namespace Ui {
class tcetwelcome;
}

struct Result {
    int exitCode;
    QString output;
};

class tcetwelcome : public QDialog {
    Q_OBJECT

public:
    explicit tcetwelcome(QWidget* parent = 0);
    ~tcetwelcome();

    Result runCmd(QString cmd, bool include_stderr = true);
    QString getVersion();
    QString getCodename();
    QString getDescription();

    QString version,codename,description;
    QString output;

    void setup();
    bool isFirstLaunch();

private slots:
    void on_buttonAbout_clicked();

    void on_checkBox_clicked(bool checked);

    void on_buttonForum_clicked();

    void on_buttonWebsite_clicked();

    void on_buttonGitlab_clicked();

    void on_buttontcetSettings_clicked();

    void on_buttonTimeshift_clicked();

    void on_buttonPartition_clicked();

    void on_buttonInstalltcet_clicked();

    void on_buttonChroot_clicked();

    void on_buttonSystemCleaner_clicked();

    void on_buttonSoftware_clicked();

    void on_buttonBootOptions_clicked();

    void on_buttonNetworkAssistant_clicked();

    void on_buttonRepository_clicked();

    void on_buttonWiki_clicked();

    void on_buttonElement_clicked();

    void on_buttonfaq_clicked();

    void on_buttontcetAssistant_clicked();

private:
    Ui::tcetwelcome* ui;
    bool checkAndInstall(QString packagename);
};

#endif // tcetSNAPSHOT_H
