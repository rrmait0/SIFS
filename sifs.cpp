/*
Copyright 2023 Kentucky State University - STEM - Computer Science

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restricti$

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON$

*/



#include <iostream>
#include <string>

int main()
{

std::string article;

std::cout << "_______________________________________________________________________\n";
std::cout << " Welcome to KYSU Smart Information Filtering System (SIFS) version 1 \n";
std::cout << " This tool should be used as a guidance to determine the proability \n";
std::cout << " of factual information \n";
std::cout << "_______________________________________________________________________\n";

std::cout << " The verification system is based on the following five pillars \n";
std::cout << " Provenance, Source, Date, Location, and Motivation \n";
std::cout << " All the pillars have equal weight \n";
std::cout << " Enter 0 for false and 1 for true for each question \n";
std::cout << "_______________________________________________________________________\n";

std::cout << " Please, enter a title for this article: ";
getline(std::cin,article);

int provenance, source, date, location, motivation;
int total_percentage;

std::cout << " 1. Provenance - original content available (0 or 1) \n";
std::cin >> provenance;
std::cout << " 2. Source - known credible source / creator (0 or 1) \n";
std::cin >> source;
std::cout << " 3. Date- article / information date (0 or 1) \n";
std::cin >> date;
std::cout << " 4. Location - credible website location (0 or 1)\n";
std::cin >> location;
std::cout << " 5. Motivation - credible website account (0 or 1)\n";
std::cin >> motivation;

if (provenance == 1)
    total_percentage = 20;

if (source == 1)
    total_percentage = total_percentage + 20;

if (date == 1)
    total_percentage = total_percentage + 20;

if (location == 1)
    total_percentage = total_percentage + 20;

if (motivation == 1)
    total_percentage = total_percentage + 20;



std::cout << " The credibility for this article: " << article << "\n";
std::cout << " The percentage of credibility " << total_percentage << "\n";

if (total_percentage >= 80)
    std::cout << "The percentage of credibility is good for this article. \n";
else if (total_percentage >= 60 && total_percentage < 80)
    std::cout << "The percentage of credibility is moderate for this article. \n";
else
    std::cout << "The precentage of credibility is low for this article. \n";


return 0;
}

