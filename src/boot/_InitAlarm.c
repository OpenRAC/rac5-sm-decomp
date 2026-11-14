/* _InitAlarm 0x01ED9EC0 -- links the 64 alarm records into a free list and points the list head at the first one. */
typedef struct AlarmRec {
    struct AlarmRec *next;
    int w4;
    int w8;
    int wC;
} AlarmRec;

extern AlarmRec D_01FE95C0[];
extern AlarmRec *D_01FE99C0;

int _InitAlarm(void) {
    int i;

    D_01FE99C0 = D_01FE95C0;
    for (i = 63; i >= 0; i--) D_01FE95C0[i].next = &D_01FE95C0[i + 1];
    D_01FE95C0[63].next = 0;
    return 0;
}
