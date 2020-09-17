#ifndef EVENT_H
#define EVENT_H


class SED;

class Event{
	protected:
		double time;

	public:
		Event(double hour);
		virtual ~Event();
		double getTime();
		virtual void process() = 0;
};

class EventComparator {
	public:
	  int operator() ( Event *e1, Event *e2) {
	    return e1->getTime() > e2->getTime();
	  }
};

#endif