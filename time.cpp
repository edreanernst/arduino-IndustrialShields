#include "time.h"

static time_t _time = 0;
static millis_t _millis = 0;

////////////////////////////////////////////////////////////////////////////////////////////////////
time_t time() {
	static millis_t lastMillis = 0;

	millis_t now = millis();
	millis_t delay = now - lastMillis;

	_millis += delay;
	if (_millis >= 1000) {
		_time += _millis / 1000;
		_millis %= 1000;
	}

	lastMillis = now;

	return _time;
}

////////////////////////////////////////////////////////////////////////////////////////////////////
time_t setTime(time_t t, millis_t m) {
	_time = t;
	_millis = m;
}
