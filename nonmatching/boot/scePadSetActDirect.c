/* scePadSetActDirect 0x01EA41E0 (14 November 2026).
 * Measured sdk991111: 5 differing words; first difference at +0x38.
 * Recover the observed types, statement order and lifetimes before retrying.
 * No matching credit.
 */
typedef struct {
    char pad0[4];
    char *block;
    unsigned char *q;
    char pad8[0x1C - 8];
} tPadSlot;

typedef struct {
    char pad0[0x72];
    unsigned char ready;
    char pad73[0x80 - 0x73];
} tPadState;

extern char pad_act_client[];
extern int pad_state_01EA3E08(int port, int slot, void *out);
extern int pad_start_01EA3A50(int port, int slot);

int scePadSetActDirect(int port, int slot, unsigned char *data) {
    tPadState st;
    char *block;
    unsigned char *q;
    int i;
    int ok;

    pad_state_01EA3E08(port, slot, &st);
    if (st.ready != 1) {
        return 0;
    }
    block = ((tPadSlot *)(pad_act_client + 0x50 + slot * 0x1C + port * 0x70))->block;
    q = (unsigned char *)(block + 0xC);
    for (i = 0; i < 6; i++) {
        q[i] = data[i];
    }
    ok = 1;
    *(int *)(block + 4) = 1;
    *(int *)(block + 8) = 6;
    if (pad_start_01EA3A50(port, slot) != 1) {
        ok = 0;
    }
    return ok;
}
