all:
	gcc src/*.c -o ldf-coloring
clear:
	rm -f ldf-coloring
	rm -rf graphs
	rm -rf codeblocks/obj
	rm -rf codeblocks/bin 
download:
	chmod +x download-graphs.sh
	./download-graphs.sh
