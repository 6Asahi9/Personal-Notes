// if i wanna fetch both of the items then..
fetch('https://example.com/items')
  .then(response => response.json())
  .then(data => {
    // Process the data here
    data.forEach(item => {
      console.log(`Item ID: ${item.id}, Type: ${item.items}`);
    });
  })
  .catch(error => {
    console.error('Error fetching data:', error);
  });

// but what if i wanna fetch only one item 
fetch('https://example.com/items')
  .then(response => response.json())
  .then(data => {
    // Find the item with id 1
    const item = data.find(item => item.id === 1);

    if (item) {
      console.log(`Item found - ID: ${item.id}, Type: ${item.items}`);
    } else {
      console.log('Item with ID 1 not found.');
    }
  })
  .catch(error => {
    console.error('Error fetching data:', error);
  });
