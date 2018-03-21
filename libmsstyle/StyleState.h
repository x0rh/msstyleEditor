#pragma once

#include "StyleProperty.h"

#include <string>
#include <memory>

#include <stdint.h>

namespace libmsstyle
{

	class StyleState
	{
	public:
		typedef std::vector<StyleProperty*>::iterator PropertyIterator;

		StyleState();
		~StyleState();

		StyleProperty* AddProperty(StyleProperty* prop);
		StyleProperty* GetProperty(int index) const;
		void RemoveProperty(int index);
		size_t GetPropertyCount() const;

		PropertyIterator begin();
		PropertyIterator end();

		int32_t stateID;
		std::string stateName;

	private:
		class Impl;
		std::shared_ptr<Impl> impl;
	};

}
