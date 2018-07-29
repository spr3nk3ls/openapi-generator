# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule OpenAPIPetstore.Api.AnotherFake do
  @moduledoc """
  API calls for all endpoints tagged `AnotherFake`.
  """

  alias OpenAPIPetstore.Connection
  import OpenAPIPetstore.RequestBuilder


  @doc """
  To test special tags
  To test special tags

  ## Parameters

  - connection (OpenAPIPetstore.Connection): Connection to server
  - client (Client): client model
  - opts (KeywordList): [optional] Optional parameters
  ## Returns

  {:ok, %OpenAPIPetstore.Model.Client{}} on success
  {:error, info} on failure
  """
  @spec test_special_tags(Tesla.Env.client, OpenAPIPetstore.Model.Client.t, keyword()) :: {:ok, OpenAPIPetstore.Model.Client.t} | {:error, Tesla.Env.t}
  def test_special_tags(connection, client, _opts \\ []) do
    %{}
    |> method(:patch)
    |> url("/another-fake/dummy")
    |> add_param(:body, :"Client", client)
    |> Enum.into([])
    |> (&Connection.request(connection, &1)).()
    |> decode(%OpenAPIPetstore.Model.Client{})
  end
end
