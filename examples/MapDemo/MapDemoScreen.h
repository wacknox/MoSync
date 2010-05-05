/* Copyright (C) 2010 Mobile Sorcery AB

This program is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License, version 2, as published by
the Free Software Foundation.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received a copy of the GNU General Public License
along with this program; see the file COPYING.  If not, write to the Free
Software Foundation, 59 Temple Place - Suite 330, Boston, MA
02111-1307, USA.
*/

#ifndef MAPDEMOSCREEN_H_
#define MAPDEMOSCREEN_H_

#include <MAUI/Screen.h>
#include <MAUtil/Moblet.h>
#include "AppScreen.h"
#include <MAP/MapWidget.h>
#include <MAP/MapSourceMgr.h>

using namespace MAP;
using namespace MapDemoUI;

namespace MapDemo 
{
	//=========================================================================
	//
	// Screen for MapDemo app
	//
	class MapDemoScreen : public AppScreen
	//=========================================================================
	{
	public:
		MapDemoScreen( MobletEx* mMoblet );
		
		virtual ~MapDemoScreen( );

		//
		// Key handling
		//
		virtual bool handleKeyPress( int keyCode );
		virtual bool handleKeyRelease( int keyCode );
		//
		// Pointer handling
		//
		virtual bool handlePointerPress( MAPoint2d point );
		virtual bool handlePointerMove( MAPoint2d point );
		virtual bool handlePointerRelease( MAPoint2d point );

		virtual void enumerateActions( Vector<Action*>& list );

	private:
		void nextMapSource( );

		MapWidget* mMap;
		MapSourceKind mMapSourceKind;

		bool scrolling ;
		int prevX;
		int prevY;

		int lastPointerPress;
	};
}

#endif // MAPDEMOSCREEN_H_
