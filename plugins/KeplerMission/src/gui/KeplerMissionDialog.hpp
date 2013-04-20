/*
 * Stellarium KeplerMission Plug-in GUI
 * 
 * Copyright (C) 2012 Alexander Wolf
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Suite 500, Boston, MA  02110-1335, USA.
*/
 
#ifndef _KEPLERMISSIONDIALOG_HPP_
#define _KEPLERMISSIONDIALOG_HPP_

#include <QObject>
#include "StelDialog.hpp"
#include "KeplerMission.hpp"

class Ui_KeplerMissionDialog;
class QTimer;

class KeplerMissionDialog : public StelDialog
{
	Q_OBJECT

public:
	KeplerMissionDialog();
	~KeplerMissionDialog();

protected:
	//! Initialize the dialog widgets and connect the signals/slots
	void createDialogContent();

public slots:
	void retranslate();
//	void refreshUpdateValues(void);

private slots:
//	void setUpdateValues(int hours);
//	void setUpdatesEnabled(int checkState);
//	void updateStateReceiver(KeplerMission::UpdateState state);
//        void updateCompleteReceiver();
//	void restoreDefaults(void);
//	void saveSettings(void);
//	void updateJSON(void);

private:
        Ui_KeplerMissionDialog* ui;
	void setAboutHtml(void);
	void updateGuiFromSettings(void);
	QTimer* updateTimer;

};

#endif // _KEPLERMISSIONDIALOG_HPP_
