NULL=

EXTRA_PROGRAMS=	ntpq
bin_PROGRAMS=	$(NTPQ_DB)
libexec_PROGRAMS=	$(NTPQ_DL)
sbin_PROGRAMS=	$(NTPQ_DS)

AM_CFLAGS = $(CFLAGS_NTP)
AM_CFLAGS += $(NTP_HARD_CFLAGS)
AM_CFLAGS += $(OPENSSL_CFLAGS)

AM_CPPFLAGS  = $(NTP_INCS)
AM_CPPFLAGS += $(LIBOPTS_CFLAGS)
AM_CPPFLAGS += $(CPPFLAGS_NTP)
AM_CPPFLAGS += $(NTP_HARD_CPPFLAGS)

AM_LDFLAGS  = $(LDFLAGS_NTP)
AM_LDFLAGS += $(NTP_HARD_LDFLAGS)
AM_LDFLAGS += $(OPENSSL_LIBS)

# LDADD might need RESLIB and ADJLIB
ntpq_LDADD  = version.o $(LIBOPTS_LDADD)
ntpq_LDADD += ../libntp/libntp.a $(LDADD_LIBNTP) $(LIBM)
ntpq_LDADD += $(PTHREAD_LIBS) $(EDITLINE_LIBS)
ntpq_LDADD += $(LDADD_NTP)
ntpq_LDADD += $(NTP_HARD_LDFLAGS)
ntpq_SOURCES=	ntpq.c ntpq-subs.c ntpq-opts.c ntpq-opts.h

noinst_HEADERS=	ntpq.h
noinst_LIBRARIES=	libntpq.a

libntpq_a_CFLAGS=	$(AM_CFLAGS)
libntpq_a_CFLAGS+=	-DNO_MAIN_ALLOWED -DBUILD_AS_LIB
libntpq_a_CPPFLAGS=	$(AM_CPPFLAGS)
#libntpq_a_LDFLAGS=	$(AM_LDFLAGS)
libntpq_a_SOURCES=	libntpq.c libntpq.h libntpq_subs.c

