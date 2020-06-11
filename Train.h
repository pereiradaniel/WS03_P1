#ifndef SDDS_TRAIN_H
#define SDDS_TRAIN_H
#include "Cargo.h"

namespace sdds
{
	const int MAX_NAME = 30;

	class Train
	{
		private:
			char train_name[MAX_NAME + 1];
			int train_id;
			Cargo* cargo_unit;

		public:
			void initialize(const char*, int id);
			bool isValid() const;
			void display() const;
			void loadCargo(Cargo);
			void unloadCargo();
	};
}

#endif#
