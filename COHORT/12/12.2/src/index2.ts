interface User2 {
    id: string;
    name: string;
    age: string;
    email: string;
    password: string;
};
// Selecting 'name', 'age', and 'email' properties from User
type UpdateProps = Pick<User2, 'name' | 'age' | 'email'>

// Making the selected properties optional
type UpdatePropsOptional = Partial<UpdateProps>

// Function that accepts an object with optional 'name', 'age', and 'email' properties
function updateUser(updatedProps: UpdatePropsOptional) {
    // hit the database to update the user
}

// Example usage of updateUser
updateUser({ name: "Alice" }); //Only updating the name 
                               //will only work if partial properties are used
updateUser({ age: "30", email: "alice@example.com" }); // Updating age and email
updateUser({}); // No updates, but still a valid call