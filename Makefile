all:
      g++ -std=c++17 txt_reader.cpp -o reader

clean:
      $(RM) reader