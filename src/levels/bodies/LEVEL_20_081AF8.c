/* LEVEL_20:0x081AF8 -- placement copy of FRONTEND_00B990.c: formats a localized message with up to three arguments reordered by the index list in the message. */

typedef struct Args_00B990 {
    char *s[3];
} Args_00B990;

extern unsigned char D_00127188;

extern unsigned char *func_0E2118(int id);
extern void func_081A90(unsigned char *msg, int *idx);
extern int sprintf(char *buf, const char *fmt, ...);

static __inline__ int is_msg_00B990(unsigned char *m)
{
    return m != 0 && m[0] == 0x91;
}

int func_081AF8(char *dst, int id, char *s1, char *s2, char *s3)
{
    unsigned char *msg;
    int idx[3];
    Args_00B990 out;
    Args_00B990 in;
    unsigned char dflt;

    msg = func_0E2118(id);
    if ((is_msg_00B990(msg) & 0xFF) != 0) {
        func_081A90(msg, idx);
        dflt = D_00127188;
        in.s[0] = (char *)&dflt;
        in.s[1] = (char *)&dflt;
        in.s[2] = (char *)&dflt;
        out = in;
        in.s[0] = s1;
        in.s[1] = s2;
        in.s[2] = s3;
        if (idx[0] != 0) {
            out.s[0] = in.s[idx[0] - 1];
        }
        if (idx[1] != 0) {
            out.s[1] = in.s[idx[1] - 1];
        }
        if (idx[2] != 0) {
            out.s[2] = in.s[idx[2] - 1];
        }
        sprintf(dst, (char *)msg + 2, out.s[0], out.s[1], out.s[2]);
        return 1;
    }
    return 0;
}
