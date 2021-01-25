numreviews = 5
repository = ['bags', 'baggage', 'banner', 'box', 'cloths']
customerQuery = 'bags'

def threeKeywordSuggestions(numreviews, repository, customerQuery):

    #Print Statements
    # print('parammeters numreviews = {}' .format(numreviews))
    # print('parammeters repository = {}' .format(repository))
    # print('parammeters customerQuery = ' + customerQuery)

    #Edge cases
    output = []
    if not isValidInput(repository, customerQuery):
        return output

    potentialSuggestions = sorted([item.lower() for item in repository])
    # print(repository)
    # print(potentialSuggestions)

    currentQuery = customerQuery[0].lower()
    print(currentQuery)

    for character in customerQuery[1:]:
        currentQuery+=character.lower()
        currentSuggestions = []

        for suggestion in potentialSuggestions:
            if suggestion.startswith(currentQuery):
                currentSuggestions.append(suggestion)
            if len(currentSuggestions) == 3:
                break

        if currentSuggestions:
            output.append(currentSuggestions)

    print(currentSuggestions)
    return [output]

def isValidInput(repository, customerQuery):
    return repository and len(customerQuery) > 1

print(threeKeywordSuggestions(numreviews, repository, customerQuery))

#threeKeywordSuggestions(5, [], "dog")
