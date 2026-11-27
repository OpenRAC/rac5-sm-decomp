/* LEVEL_19:0x159CC8 -- event handler: events 6 and 7 restart the object with or without a flag, event 10 pauses it and asks for state 3. */
extern void func_0154A0(void *o, int flag, void *source, unsigned char index);
extern void func_06F9A8(void *o);

int func_159CC8(void *o, int event)
{
    if (event == 6) {
        func_0154A0(o, 1, 0, 0);
    } else if (event == 7) {
        func_0154A0(o, 0, 0, 0);
    } else if (event == 10) {
        ((void (*)(void *o, int a))func_06F9A8)(o, 1);
        return 3;
    }
    return 0;
}
