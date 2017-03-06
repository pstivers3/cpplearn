#include <iostream>

int main()
{
    unsigned char option_viewed = 0x01;     // 0000 0001
    unsigned char option_edited = 0x02;     // 0000 0010
    unsigned char option_favorited = 0x04;  // 0000 0100
    unsigned char option_shared = 0x08;     // 0000 1000
    unsigned char option_deleted = 0x80;    // 1000 0000
 
    unsigned char myArticleFlags;

    // set the article as viewed
    myArticleFlags |= option_viewed;

   	// check if the article was deleted
	std::cout << "option_deleted: " << bool(myArticleFlags & option_deleted) << "\n";
     
  	// unset the article as a favorite
	myArticleFlags &= ~option_favorited;
    
	return 0;
}
