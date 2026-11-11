/* LEVEL_08:0x1997D0 -- builds a local parameter block and submits it with a global object. */
extern char D_00250FEC[];
extern char D_0026D7E8[];
extern char D_003E6D38[];
extern void func_137108(void *a0, void *a1, void *a2);
extern void func_110EE0(void *obj, void *arr, int n, float f12, float f13);

struct L08Block {
    char hdr[12];
    float f0c;
    float f10;
    float f14;
    float f18;
    char *p1c;
};

void func_1997D0(char *a0)
{
    struct L08Block st;

    func_137108(&st, a0, D_0026D7E8);
    st.p1c = D_003E6D38;
    st.f0c = 0.28f;
    st.f10 = 0.35f;
    st.f14 = -1.0f;
    st.f18 = 1.0f;
    func_110EE0(*(void **)D_00250FEC, &st, 20, 0.0f, 0.0f);
}
