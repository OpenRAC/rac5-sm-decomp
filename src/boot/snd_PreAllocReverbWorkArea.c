/* snd_PreAllocReverbWorkArea -- asks the IOP to pre-allocate the reverb work area. */
extern void snd_SendIOPCommandNoWait(int command, int length, void *data, int arg3, int arg4);

void snd_PreAllocReverbWorkArea(int mode, int size) {
    int args[2];

    args[0] = mode;
    args[1] = size;
    snd_SendIOPCommandNoWait(0x51, 8, args, 0, 0);
}
