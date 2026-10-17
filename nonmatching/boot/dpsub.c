/* PARKED (w2-agent-04): retail saves callee-saved GPRs with a 16-byte slot
   stride (s0@0x0, ra@0x10, ...) which the pinned chain emits as 8-byte slots
   (mcc/mips.c:4723, RAC0/RAC2 TImode anchor neutralised). Body is otherwise
   identical; the frame offsets are not reachable from C. Reopen if the
   compiler profile gains that anchor. */
/* dpsub 0x01E96458..0x01E964C0 */
typedef struct { int class; int sign; int normal_exp; int pad; long long fraction; int pad2; } fp_number_type;
extern void __unpack_d(double *a, fp_number_type *x);
extern fp_number_type *__add_d(fp_number_type *x, fp_number_type *y, fp_number_type *z);
extern double __pack_d(fp_number_type *z);
double dpsub(double a, double b) {
    fp_number_type x, y, z;
    fp_number_type *r;
    __unpack_d(&a, &x);
    __unpack_d(&b, &y);
    y.sign ^= 1;
    r = __add_d(&x, &y, &z);
    return __pack_d(r);
}
