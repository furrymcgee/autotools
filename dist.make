debian:
	dh_make --single --yes --createorig

dist:
	debuild -uc -us
