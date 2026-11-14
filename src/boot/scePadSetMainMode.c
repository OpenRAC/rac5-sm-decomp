/* scePadSetMainMode -- sends the main-mode request (mode, lock option) for one pad slot to the pad server and commits it when the server answers 1. */
struct PadModeData {
    int type;
    int port;
    int slot;
    int mode;
    int option;
    int result;
};

extern int pad_act_req;
extern int pad_act_client[];

extern int sceSifCallRpc(void *, int, int, void *, int, void *, int, void *, void *);
extern int func_1EA4058(int, int, int);

int scePadSetMainMode(int port, int slot, int mode, int option) {
    struct PadModeData *d = (struct PadModeData *)&pad_act_req;

    d->type = 6;
    d->port = port;
    d->slot = slot;
    d->mode = mode;
    d->option = option;
    if (sceSifCallRpc(pad_act_client, 1, 0, d, 0x80, d, 0x80, 0, 0) < 0) {
        return 0;
    }
    if (d->result == 1) {
        func_1EA4058(port, slot, 2);
    }
    return d->result;
}
