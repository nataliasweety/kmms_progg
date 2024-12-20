#pragma once

namespace lib {
	struct actions {
		const char* const title;
		void (*func)();
	};
}