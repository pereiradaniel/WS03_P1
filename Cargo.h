#ifndef SDDS_CARGO_H
#define SDDS_CARGO_H

namespace sdds
{
	const int MAX_DESC = 20;

	struct Cargo
	{
		char cargo_description[MAX_DESC + 1];  // +1 for null terminator.
		double cargo_weight;
	};
}

#endif