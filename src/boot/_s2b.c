/* _s2b -- RAC5 boot body, w11/s1.
 *
 * Provenance: the old BSD/newlib dtoa.c digit-string to Bigint converter
 * (David M. Gay), reconstructed from the retail disassembly of
 * 0x01ECF9A0..0x01ECFAD8. Measured details: x = (nd + 8) / 9 (32-bit div with
 * the zero-division guard), the power loop uses its own y9 and the 5th argument
 * y is what lands in _x[0], then 9-digit chunks through _multadd(a2=10).
 * Retail: 0x01ECF9A0, interval 312 bytes. Toolchain: SN ProDG 3.01 ee-gcc2953
 * (GCC 2.95.3) -O2 -G0, span5 assembler (-G0), SN ld.exe.
 */
struct _reent;

typedef struct _Bigint {
  struct _Bigint *_next;
  int _k;
  int _maxwds;
  int _sign;
  int _wds;
  unsigned int _x[1];
} Bigint;

extern Bigint *_Balloc (struct _reent *, int);
extern Bigint *_multadd (struct _reent *, Bigint *, int, int);

Bigint *
_s2b (struct _reent *ptr, const char *s, int nd0, int nd, unsigned int y)
{
  Bigint *b;
  int i, k;
  int x, y9;

  x = (nd + 8) / 9;
  for (k = 0, y9 = 1; x > y9; y9 <<= 1, k++)
    ;
  b = _Balloc (ptr, k);
  b->_x[0] = y;
  b->_wds = 1;
  i = 9;
  if (9 < nd0)
    {
      s += 9;
      do
	b = _multadd (ptr, b, 10, *s++ - '0');
      while (++i < nd0);
      s++;
    }
  else
    s += 10;
  for (; i < nd; i++)
    b = _multadd (ptr, b, 10, *s++ - '0');
  return b;
}
