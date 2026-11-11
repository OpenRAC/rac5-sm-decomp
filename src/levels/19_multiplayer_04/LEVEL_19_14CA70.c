/* LEVEL_19.REL @ 0x14CA70 — 104 octets, lwc1/swc1 */
typedef struct {
    float x, y, z;
} Vec3;

typedef struct {
    Vec3 a;
    Vec3 b;
    float c;
    int d;
} St;

void func_0D8578(int a0, St *a1, int a2);

void func_14CA70(int a0, Vec3 *p, Vec3 *q)
{
    St st;

    st.a.x = p->x;
    st.a.y = p->y;
    st.a.z = p->z;
    st.b.x = q->x;
    st.b.y = q->y;
    st.b.z = q->z;
    st.c = 0.5f;
    st.d = 0;
    func_0D8578(a0, &st, 0);
}
