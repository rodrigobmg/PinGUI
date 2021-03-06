#pragma once
/**

PinGUI

Copyright (c) 2017 Lubomir Barantal <l.pinsius@gmail.com>

This software is provided 'as-is', without any express or implied
warranty. In no event will the authors be held liable for any damages
arising from the use of this software.

Permission is granted to anyone to use this software for any purpose,
including commercial applications, and to alter it and redistribute it
freely, subject to the following restrictions:

1. The origin of this software must not be misrepresented; you must not
claim that you wrote the original software. If you use this software
in a product, an acknowledgment in the product documentation would be
appreciated but is not required.
2. Altered source versions must be plainly marked as such, and must not be
misrepresented as being the original software.
3. This notice may not be removed or altered from any source distribution.

**/

#include "Button.h"

class IconButton:public Button
{
	protected:

		//If you binded custom collision sprite
		bool _customCollisionSprite;

		std::shared_ptr<GUI_Sprite> _collisionSprite;


		/*
			Private methods
		*/
		void rotateSprites();
	public:
		IconButton();
		~IconButton();

		//Creating the icon with its positions, filePath to its icon picture and a pointer to a void function
		IconButton(GUIPos x, GUIPos y, SDL_Surface* iconPictureSurface, PinGUI::basicPointer f);

		//With this constructor its possible to set the size of the icon collider to the selected width and height 
		IconButton(GUIPos x, GUIPos y, SDL_Surface* iconSurface, float width, float height, PinGUI::basicPointer f);

		//This functions sets the image of the icon to the selected image
		void setCollisionSprite(SDL_Surface* iconSurface);

		void setWritingAvailability(bool state) override;

		void turnOffAim() override;

		void turnOnAim() override;

		void offsetTo(orientation orient, GUIPos distance);
};

