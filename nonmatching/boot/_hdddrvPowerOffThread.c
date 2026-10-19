extern void WaitSema(int sema);
extern int sceDevctl(void *dev, int cmd, void *arg, void *out, int outlen, int inlen);
extern int sceCdPowerOff(int *status);
extern char hdd_devctl_a[];
extern char hdd_devctl_b[];

void _hdddrvPowerOffThread(int sema) {
    int status = 0;

    for (;;) {
        WaitSema(sema);
        sceDevctl(hdd_devctl_a, 0x5003, 0, 0, 0, 0);
        while (sceDevctl(hdd_devctl_b, 0x4402, 0, 0, 0, 0) < 0)
            ;
        do {
        } while (sceCdPowerOff(&status) == 0 || status != 0);
    }
}
