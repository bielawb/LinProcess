OMI = $(shell find / -name omi.mak -print -quit 2> /dev/null)
include $(OMI)

PROVIDER = Process
SOURCES = $(wildcard *.c *.cpp)
CLASSES = Lin_Process=Process 

$(LIBRARY): $(OBJECTS)
	$(CXX) $(CXXSHLIBFLAGS) $(OBJECTS) -o $(LIBRARY) $(CXXLIBS)

%.o: %.c
	$(CC) -c $(CFLAGS) $(INCLUDES) $< $(CLIBS) -o $@

%.o: %.cpp
	$(CXX) -c $(CXXFLAGS) $(INCLUDES) $< -o $@

reg:
	$(BINDIR)/omireg $(CURDIR)/$(LIBRARY)

gen:
	$(BINDIR)/omigen --cpp -m Process schema.mof Lin_Process=Process

clean:
	rm -f $(LIBRARY) $(OBJECTS) $(PROVIDER).reg


