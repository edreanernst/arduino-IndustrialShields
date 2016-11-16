#ifndef __TIME_H__
#define __TIME_H__

class TimeClass {
	public:
		TimeClass();

	public:
		void update();

		void set(unsigned long time, unsigned long ms = 0L);
		unsigned long get() const;

	private:
		unsigned long _timestamp;
		unsigned long _millis;
};

static TimeClass Time;

#endif // __TIME_H__
