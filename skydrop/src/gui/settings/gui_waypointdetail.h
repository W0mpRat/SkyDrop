/*
 * gui_waypoint_detail.h
 *
 *  Created on: Jun 23, 2018
 *      Author: tilmann@bubecks.de
 */

#ifndef GUI_SETTINGS_GUI_WAYPOINTDETAIL_H_
#define GUI_SETTINGS_GUI_WAYPOINTDETAIL_H_

#include "../gui.h"

void gui_waypointdetail_init();
void gui_waypointdetail_stop();
void gui_waypointdetail_loop();
void gui_waypointdetail_irqh(uint8_t type, uint8_t * buff);


#endif /* GUI_SETTINGS_GUI_WAYPOINTDETAIL_H_ */
