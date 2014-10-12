sample=../sample

all: sample
	for f in `ls -A ./`; \
	do \
		if [ -d $$f ];then \
			cd $$f && gcc -o $$f -I ../$(sample) *.c ../$(sample)/*.o && cd ../; \
		fi; \
	done
sample:
	cd $(sample) && make all
