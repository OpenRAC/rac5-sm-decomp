/* LEVEL_02:0x1AB7B0 -- state machine of the timed pickup (state byte +0x46): while the countdown (+0x70) is positive and the global trigger fires, state 0 starts the effect and moves to 1 and state 2 moves to 3; state 3 then fades the screen and starts the follow-up when the fade request is accepted. */
extern char D_0024C650[];

extern int func_03D480(char *table);
extern void func_027080(int a0, int a1, int a2, int a3, int a4, int a5, int a6);
extern void func_0AC910(int a, unsigned int color, int w, int h, int mode, int flag);
extern int func_0AC948(int a);
extern void func_1AB888(char *object);

void func_1AB7B0(char *object)
{
    unsigned char ok;

    if (0.0f < *(float *)(object + 0x70)) {
        ok = func_03D480(D_0024C650);
        if (ok) {
            if (*(unsigned char *)(object + 0x46) == 0) {
                func_027080(*(unsigned char *)(object + 0x45), 1, (int)func_1AB888, 0, (int)object, -1, 1);
                *(unsigned char *)(object + 0x46) = 1;
            } else if (*(unsigned char *)(object + 0x46) == 2) {
                *(unsigned char *)(object + 0x46) = 3;
            }
        }
    }
    if (*(unsigned char *)(object + 0x46) == 3) {
        func_0AC910(0, 0xFF000000U, 0x20, 0x20, 3, 0);
        if (func_0AC948(0) != 0) {
            func_1AB888(object);
        }
    }
}
