/* TimerUSec2BusClock 0x01ED9E40 -- converts a seconds/microseconds pair to bus clock ticks (bus clock rate 0x08CA0000 per second). */
unsigned long long TimerUSec2BusClock(unsigned int sec, unsigned int usec) {
    return (unsigned long long)sec * 0x08CA0000u + (unsigned long long)usec * 0x08CA0000u / 1000000u;
}
